// HeapCtrl.h
// For release and allocate heap memory

#pragma once


namespace heap_ctrl {
	// Release heap memory
	template <typename T>
	void release(T** p) {
		if (p) {
			if (*p) {
				delete *p;
				*p = nullptr;
			}
		}
	}

	// Release 1 dimensional heap memory
	template <typename T>
	void releaseN(T** p) {
		if (p) {
			if (*p) {
				delete [] *p;
				*p = nullptr;
			}
		}
	}

	// Release 2 dimensional heap memory
	// that is only allocated below
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

	// Allocate 2 dimensional heap memory
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
