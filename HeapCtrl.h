#pragma once


namespace heap_ctrl {
	template <typename T>
	void release(T** p) {
		if (p) {
			if (*p) {
				delete *p;
				*p = nullptr;
			}
		}
	}

	template <typename T>
	void releaseN(T** p) {
		if (p) {
			if (*p) {
				delete [] *p;
				*p = nullptr;
			}
		}
	}

	template <typename T>
	void releaseMN(T*** p) {
		if (p) {
			if (**p) {
				delete [] **p;
				delete [] *p;
				*p = nullptr;
			}
		}
	}

	template <typename T>
	T** allocate(int rows, int cols) {
		T** p = new T * [rows];
		p[0] = new T[rows * cols];
		for (int i = 0; i < rows; i++) {
			p[i] = p[0] + i * cols;
		}
		return p;
	}
};
