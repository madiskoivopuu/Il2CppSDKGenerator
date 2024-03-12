#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Stabs {

class ListPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Stabs", "ListPool`1"));
	}

	template <typename T = void*> static T& s_ListPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Clear(Il2CppList<uintptr_t>* l) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, l);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void> static T Release(Il2CppList<uintptr_t>* toRelease) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, toRelease);
	}

};

}
