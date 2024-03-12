#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TerritoryNames
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TerritoryNames"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Left() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Right() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SetNames(Il2CppString* left, Il2CppString* right) {
		return ((T (*)(TerritoryNames*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16B63E8))(this, left, right);
	}

};

}
