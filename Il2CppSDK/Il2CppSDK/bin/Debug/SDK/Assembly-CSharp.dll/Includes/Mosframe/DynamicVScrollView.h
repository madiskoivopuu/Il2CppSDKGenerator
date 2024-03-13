#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../Mosframe/DynamicScrollView.h" 
namespace Mosframe {

class DynamicVScrollView : public DynamicScrollView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mosframe", "DynamicVScrollView"));
	}


	template <typename T = float> T get_contentAnchoredPosition() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99F38))(this);
	}
	template <typename T = void> T set_contentAnchoredPosition(float value) {
		return ((T (*)(DynamicVScrollView*, float))(Il2CppBase() + 0x1A99F60))(this, value);
	}
	template <typename T = float> T get_contentSize() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99FA8))(this);
	}
	template <typename T = float> T get_viewportSize() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A99FEC))(this);
	}
	template <typename T = float> T get_itemSize() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A030))(this);
	}
	template <typename T = void> T init() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A074))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A07C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DynamicVScrollView*))(Il2CppBase() + 0x1A9A0A0))(this);
	}

};

}
