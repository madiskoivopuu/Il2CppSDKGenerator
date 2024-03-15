#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TerritoryNames
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TerritoryNames"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& Left() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Right() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R SetNames(Il2CppString* left, Il2CppString* right) {
		return ((R (*)(TerritoryNames*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B63E8))(this, left, right);
	}

};

