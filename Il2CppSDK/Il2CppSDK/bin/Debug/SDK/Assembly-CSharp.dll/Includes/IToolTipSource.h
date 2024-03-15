#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IToolTipSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IToolTipSource"));
	}


	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(IToolTipSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnDraw(Action1<float>* value) {
		return ((R (*)(IToolTipSource*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnDraw(Action1<float>* value) {
		return ((R (*)(IToolTipSource*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}

};

