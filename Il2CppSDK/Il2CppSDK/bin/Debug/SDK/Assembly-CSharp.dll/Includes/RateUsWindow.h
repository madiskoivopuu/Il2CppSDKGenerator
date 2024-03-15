#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RateUsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RateUsWindow"));
	}

	template <typename R = uintptr_t> R& _content() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _rateButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<StarView*>*> R& _stars() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _seletedIndex() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(RateUsWindow*))(Il2CppBase() + 0x1718F94))(this);
	}
	template <typename R = void> R OnStarClick(int32_t index) {
		return ((R (*)(RateUsWindow*, int32_t))(Il2CppBase() + 0x1719178))(this, index);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RateUsWindow*, float))(Il2CppBase() + 0x171921C))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(RateUsWindow*))(Il2CppBase() + 0x171928C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(RateUsWindow*))(Il2CppBase() + 0x1719514))(this);
	}
	template <typename R = void> R OnRateClick() {
		return ((R (*)(RateUsWindow*))(Il2CppBase() + 0x17195B0))(this);
	}
	template <typename R = uintptr_t> R Showing(float delay) {
		return ((R (*)(RateUsWindow*, float))(Il2CppBase() + 0x1719640))(this, delay);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(RateUsWindow*))(Il2CppBase() + 0x17196C8))(this);
	}

};

