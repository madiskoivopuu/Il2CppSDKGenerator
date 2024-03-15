#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IColorEntity"));
	}


	template <typename R = ColorComponent*> R get_color() {
		return ((R (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasColor() {
		return ((R (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(IColorEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newHexColor);
	}
	template <typename R = void> R ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(IColorEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newHexColor);
	}
	template <typename R = void> R RemoveColor() {
		return ((R (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

