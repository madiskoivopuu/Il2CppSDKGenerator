#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractRadiusComponent"));
	}

	template <typename T = float> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& HighLight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& OffsetX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LogicOffsetX() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LogicOffsetY() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Vec2*> T GetLogicOffset() {
		return ((T (*)(InteractRadiusComponent*))(Il2CppBase() + 0x146A560))(this);
	}
	template <typename T = Vec2*> T GetHighlightOffset() {
		return ((T (*)(InteractRadiusComponent*))(Il2CppBase() + 0x146A590))(this);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(InteractRadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x146A5C0))(this, targetObject);
	}

};

