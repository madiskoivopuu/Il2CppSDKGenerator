#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../CheatView.h" 
namespace AdvancedCheats {

class ToggleCheatView : public CheatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "ToggleCheatView"));
	}

	template <typename R = uintptr_t> R& toggle() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Bind(Il2CppString* innerName, Func1<bool>* getter, Action1<bool>* setter) {
		return ((R (*)(ToggleCheatView*, Il2CppString*, Func1<bool>*, Action1<bool>*))(Il2CppBase() + 0x14F190C))(this, innerName, getter, setter);
	}

};

}
