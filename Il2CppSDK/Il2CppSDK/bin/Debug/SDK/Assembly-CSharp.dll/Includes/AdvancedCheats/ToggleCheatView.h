#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CheatView" 
namespace AdvancedCheats {

class ToggleCheatView: CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "ToggleCheatView"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Bind(Il2CppString* innerName, void* getter, void* setter) {
		return ((T (*)(ToggleCheatView*, Il2CppString*, void*, void*))(Il2CppBase() + 0x14F190C))(this, innerName, getter, setter);
	}

};

}
