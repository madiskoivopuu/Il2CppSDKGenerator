#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractRadiusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractRadiusComponent"));
	}

	template <typename R = float> R& MinValue() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& HighLight() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& OffsetX() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& OffsetY() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& LogicOffsetX() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& LogicOffsetY() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = Vec2> R GetLogicOffset() {
		return ((R (*)(InteractRadiusComponent*))(Il2CppBase() + 0x146A560))(this);
	}
	template <typename R = Vec2> R GetHighlightOffset() {
		return ((R (*)(InteractRadiusComponent*))(Il2CppBase() + 0x146A590))(this);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(InteractRadiusComponent*, Il2CppObject*))(Il2CppBase() + 0x146A5C0))(this, targetObject);
	}

};

