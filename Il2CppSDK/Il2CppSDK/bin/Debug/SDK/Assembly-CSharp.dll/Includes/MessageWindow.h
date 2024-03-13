#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindow1.h" 

class MessageWindow : public BaseMessageWindow1<MessageWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageWindow"));
	}

	template <typename T = uintptr_t> T& _messageImage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _currencyIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = TextMonoBehaviour*> T& _timer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _nextTimer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& _leftTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = bool> T get__isButtonDelayed() {
		return ((T (*)(MessageWindow*))(Il2CppBase() + 0x12CEC48))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(MessageWindow*))(Il2CppBase() + 0x12CEC58))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MessageWindow*, float))(Il2CppBase() + 0x12CF154))(this, deltaTime);
	}

};

