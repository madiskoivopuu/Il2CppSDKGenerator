#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../AdvancedCheats/CustomTabContentView.h" 
namespace AdvancedCheats {

class RunesConstructionView : public CustomTabContentView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "RunesConstructionView"));
	}

	template <typename T = uintptr_t> T& _classes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _grades() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = PetCheatItem*> T& _runeItem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _inited() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Show() {
		return ((T (*)(RunesConstructionView*))(Il2CppBase() + 0x1353D8C))(this);
	}
	template <typename T = void> T OnRuneItemOnClick(Il2CppString* blueprint) {
		return ((T (*)(RunesConstructionView*, Il2CppString*))(Il2CppBase() + 0x13545C8))(this, blueprint);
	}

};

}
