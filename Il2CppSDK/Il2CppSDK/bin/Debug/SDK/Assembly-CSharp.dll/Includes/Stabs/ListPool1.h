#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

template <typename T>
class ListPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ListPool`1"));
	}

	 static ObjectPool1<Il2CppList<T>*>*& s_ListPool() {
		return *(ObjectPool1<Il2CppList<T>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R Clear(Il2CppList<T>* l) {
		return ((R (*)(void *, Il2CppList<T>*))(Il2CppBase() + 0x0))(0, l);
	}
	 static Il2CppList<T>* Get() {
		return ((Il2CppList<T>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R Release(Il2CppList<T>* toRelease) {
		return ((R (*)(void *, Il2CppList<T>*))(Il2CppBase() + 0x0))(0, toRelease);
	}

};

}
