#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipEntity"));
	}


	template <typename T = ToolTipComponent*> T get_toolTip() {
		return ((T (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddToolTip(ToolTipValue* newValue) {
		return ((T (*)(IToolTipEntity*, ToolTipValue*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(ToolTipValue* newValue) {
		return ((T (*)(IToolTipEntity*, ToolTipValue*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}

};

