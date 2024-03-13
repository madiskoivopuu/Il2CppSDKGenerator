#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CheatView.h" 
namespace AdvancedCheats {

class ToggleCheatView : public CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "ToggleCheatView"));
	}

	template <typename T = uintptr_t> T& toggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Bind(Il2CppString* innerName, Func1bool>* getter, Action1bool>* setter) {
		return ((T (*)(ToggleCheatView*, Il2CppString*, Func1bool>*, Action1bool>*))(Il2CppBase() + 0x14F190C))(this, innerName, getter, setter);
	}

};

}
