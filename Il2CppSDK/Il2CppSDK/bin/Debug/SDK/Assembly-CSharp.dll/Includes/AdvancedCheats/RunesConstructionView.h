#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../CustomTabContentView.h" 
namespace AdvancedCheats {

class RunesConstructionView : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "RunesConstructionView"));
	}

	template <typename R = uintptr_t> R& _classes() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _grades() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = AdvancedCheats::PetCheatItem*> R& _runeItem() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _inited() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Show() {
		return ((R (*)(RunesConstructionView*))(Il2CppBase() + 0x1353D8C))(this);
	}
	template <typename R = void> R OnRuneItemOnClick(Il2CppString* blueprint) {
		return ((R (*)(RunesConstructionView*, Il2CppString*))(Il2CppBase() + 0x13545C8))(this, blueprint);
	}

};

}
