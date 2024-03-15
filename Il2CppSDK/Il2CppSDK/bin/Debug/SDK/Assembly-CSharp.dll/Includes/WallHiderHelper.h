#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallHiderHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallHiderHelper"));
	}

	template <typename R = int32_t> R& _id() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _WhatToHide() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _materials() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = Il2CppArray<uintptr_t>*> R get_Materials() {
		return ((R (*)(WallHiderHelper*))(Il2CppBase() + 0x112BAAC))(this);
	}

};

