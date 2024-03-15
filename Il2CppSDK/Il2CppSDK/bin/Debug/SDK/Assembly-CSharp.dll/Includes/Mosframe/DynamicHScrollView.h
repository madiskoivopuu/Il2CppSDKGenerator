#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../DynamicScrollView.h" 
namespace Mosframe {

class DynamicHScrollView : public DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicHScrollView"));
	}


	template <typename R = float> R get_contentAnchoredPosition() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97A40))(this);
	}
	template <typename R = void> R set_contentAnchoredPosition(float value) {
		return ((R (*)(DynamicHScrollView*, float))(Il2CppBase() + 0x1A97A5C))(this, value);
	}
	template <typename R = float> R get_contentSize() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97AA4))(this);
	}
	template <typename R = float> R get_viewportSize() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97AE8))(this);
	}
	template <typename R = float> R get_itemSize() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97B2C))(this);
	}
	template <typename R = void> R init() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97B70))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A985C8))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A98728))(this);
	}

};

}
