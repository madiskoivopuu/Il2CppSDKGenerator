#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolPrefab"));
	}

	template <typename R = ItemEntity*> R& Item() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Nullable1int32_t>*& Armed() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x8);
	}
	template <typename R = ToolView*> R& View() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R ChangeActive(bool active) {
		return ((R (*)(ToolPrefab*, bool))(Il2CppBase() + 0xEA8D10))(this, active);
	}
	template <typename R = bool> R Reset() {
		return ((R (*)(ToolPrefab*))(Il2CppBase() + 0xEA8DE4))(this);
	}
	template <typename R = void> R DublicateMaterial() {
		return ((R (*)(ToolPrefab*))(Il2CppBase() + 0xEA8F48))(this);
	}

};

