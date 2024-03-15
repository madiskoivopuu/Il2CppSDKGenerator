#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../DynamicScrollView.h" 
namespace Mosframe {

class DynamicVScrollView : public DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicVScrollView"));
	}


	template <typename R = float> R get_contentAnchoredPosition() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99F38))(this);
	}
	template <typename R = void> R set_contentAnchoredPosition(float value) {
		return ((R (*)(DynamicVScrollView*, float))(Il2CppBase() + 0x1A99F60))(this, value);
	}
	template <typename R = float> R get_contentSize() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99FA8))(this);
	}
	template <typename R = float> R get_viewportSize() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99FEC))(this);
	}
	template <typename R = float> R get_itemSize() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A030))(this);
	}
	template <typename R = void> R init() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A074))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A07C))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A0A0))(this);
	}

};

}
