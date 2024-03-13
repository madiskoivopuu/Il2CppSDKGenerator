#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindowContext.h" 

class MessageWindowContext : public BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindowContext"));
	}

	template <typename T = Icon*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = CurrencyType*> T& Currency() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& ActivateButtonDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Icon*> T get_Icon() {
		return ((T (*)(MessageWindowContext*))(Il2CppBase() + 0x1096264))(this);
	}
	template <typename T = void> T set_Icon(Icon* value) {
		return ((T (*)(MessageWindowContext*, Icon*))(Il2CppBase() + 0x1096274))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(MessageWindowContext*))(Il2CppBase() + 0x1096290))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(MessageWindowContext*, int32_t))(Il2CppBase() + 0x1096298))(this, value);
	}
	template <typename T = CurrencyType*> T get_Currency() {
		return ((T (*)(MessageWindowContext*))(Il2CppBase() + 0x10962A0))(this);
	}
	template <typename T = void> T set_Currency(CurrencyType* value) {
		return ((T (*)(MessageWindowContext*, CurrencyType*))(Il2CppBase() + 0x10962A8))(this, value);
	}
	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(MessageWindowContext*))(Il2CppBase() + 0x10962B0))(this);
	}

};

