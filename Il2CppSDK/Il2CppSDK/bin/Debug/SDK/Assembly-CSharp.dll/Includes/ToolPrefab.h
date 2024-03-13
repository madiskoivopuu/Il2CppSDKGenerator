#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolPrefab"));
	}

	template <typename T = ItemEntity*> T& Item() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Nullable1int32_t>*> T& Armed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = ToolView*> T& View() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ChangeActive(bool active) {
		return ((T (*)(ToolPrefab*, bool))(Il2CppBase() + 0xEA8D10))(this, active);
	}
	template <typename T = bool> T Reset() {
		return ((T (*)(ToolPrefab*))(Il2CppBase() + 0xEA8DE4))(this);
	}
	template <typename T = void> T DublicateMaterial() {
		return ((T (*)(ToolPrefab*))(Il2CppBase() + 0xEA8F48))(this);
	}

};

