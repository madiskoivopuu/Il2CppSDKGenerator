#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindowContext.h" 

class MessageWindowContext : public BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindowContext"));
	}

	template <typename R = Icon> R& Icon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = CurrencyType> R& Currency() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = float> R& ActivateButtonDelay() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = Icon> R get_Icon() {
		return ((R (*)(MessageWindowContext*))(Il2CppBase() + 0x1096264))(this);
	}
	template <typename R = void> R set_Icon(Icon value) {
		return ((R (*)(MessageWindowContext*, Icon))(Il2CppBase() + 0x1096274))(this, value);
	}
	template <typename R = int32_t> R get_Price() {
		return ((R (*)(MessageWindowContext*))(Il2CppBase() + 0x1096290))(this);
	}
	template <typename R = void> R set_Price(int32_t value) {
		return ((R (*)(MessageWindowContext*, int32_t))(Il2CppBase() + 0x1096298))(this, value);
	}
	template <typename R = CurrencyType> R get_Currency() {
		return ((R (*)(MessageWindowContext*))(Il2CppBase() + 0x10962A0))(this);
	}
	template <typename R = void> R set_Currency(CurrencyType value) {
		return ((R (*)(MessageWindowContext*, CurrencyType))(Il2CppBase() + 0x10962A8))(this, value);
	}
	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(MessageWindowContext*))(Il2CppBase() + 0x10962B0))(this);
	}

};

