#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipSource"));
	}


	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(IToolTipSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnDraw(Action1float>* value) {
		return ((T (*)(IToolTipSource*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDraw(Action1float>* value) {
		return ((T (*)(IToolTipSource*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}

};

