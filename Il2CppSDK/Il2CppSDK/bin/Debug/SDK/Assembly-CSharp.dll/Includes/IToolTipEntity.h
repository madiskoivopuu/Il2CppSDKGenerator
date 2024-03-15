#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipEntity"));
	}


	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(IToolTipEntity*, ToolTipValue*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(IToolTipEntity*, ToolTipValue*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(IToolTipEntity*))(Il2CppBase() + 0x0))(this);
	}

};

