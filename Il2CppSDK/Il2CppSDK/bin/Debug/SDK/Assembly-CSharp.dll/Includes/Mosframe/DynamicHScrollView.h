#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../Mosframe/DynamicScrollView" 
namespace Mosframe {

class DynamicHScrollView: DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicHScrollView"));
	}


	template <typename T = float> T get_contentAnchoredPosition() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97A40))(this);
	}
	template <typename T = void> T set_contentAnchoredPosition(float value) {
		return ((T (*)(DynamicHScrollView*, float))(Il2CppBase() + 0x1A97A5C))(this, value);
	}
	template <typename T = float> T get_contentSize() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97AA4))(this);
	}
	template <typename T = float> T get_viewportSize() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97AE8))(this);
	}
	template <typename T = float> T get_itemSize() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97B2C))(this);
	}
	template <typename T = void> T init() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A97B70))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A985C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DynamicHScrollView*))(Il2CppBase() + 0x1A98728))(this);
	}

};

}
