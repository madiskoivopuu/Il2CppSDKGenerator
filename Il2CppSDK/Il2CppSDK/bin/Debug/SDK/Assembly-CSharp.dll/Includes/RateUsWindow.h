#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RateUsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RateUsWindow"));
	}

	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _rateButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _stars() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _seletedIndex() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RateUsWindow*))(Il2CppBase() + 0x1718F94))(this);
	}
	template <typename T = void> T OnStarClick(int32_t index) {
		return ((T (*)(RateUsWindow*, int32_t))(Il2CppBase() + 0x1719178))(this, index);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RateUsWindow*, float))(Il2CppBase() + 0x171921C))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(RateUsWindow*))(Il2CppBase() + 0x171928C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RateUsWindow*))(Il2CppBase() + 0x1719514))(this);
	}
	template <typename T = void> T OnRateClick() {
		return ((T (*)(RateUsWindow*))(Il2CppBase() + 0x17195B0))(this);
	}
	template <typename T = uintptr_t> T Showing(float delay) {
		return ((T (*)(RateUsWindow*, float))(Il2CppBase() + 0x1719640))(this, delay);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RateUsWindow*))(Il2CppBase() + 0x17196C8))(this);
	}

};

