#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IColorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IColorEntity"));
	}


	template <typename T = ColorComponent*> T get_color() {
		return ((T (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasColor() {
		return ((T (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(IColorEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newHexColor);
	}
	template <typename T = void> T ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(IColorEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newHexColor);
	}
	template <typename T = void> T RemoveColor() {
		return ((T (*)(IColorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

