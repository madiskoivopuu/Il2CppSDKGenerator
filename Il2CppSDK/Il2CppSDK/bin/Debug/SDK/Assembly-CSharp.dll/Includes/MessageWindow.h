#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindow1.h" 

class MessageWindow : public BaseMessageWindow1<MessageWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindow"));
	}

	template <typename R = uintptr_t> R& _messageImage() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _currencyIcon() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = TextMonoBehaviour*> R& _timer() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = int32_t> R& _nextTimer() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = float> R& _leftTime() {
		return *(R*)((uintptr_t)this + 0xCC);
	}

	template <typename R = bool> R get__isButtonDelayed() {
		return ((R (*)(MessageWindow*))(Il2CppBase() + 0x12CEC48))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(MessageWindow*))(Il2CppBase() + 0x12CEC58))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MessageWindow*, float))(Il2CppBase() + 0x12CF154))(this, deltaTime);
	}

};

