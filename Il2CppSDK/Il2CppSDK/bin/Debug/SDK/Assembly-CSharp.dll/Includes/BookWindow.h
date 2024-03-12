#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BookWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookWindow"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CaptionImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PagePanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BookPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SagaPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PageText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BookInitialCapImage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BookInitialCapText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BookText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SagaImage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& SagaText() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BookWindow*))(Il2CppBase() + 0x16C7D00))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BookWindow*))(Il2CppBase() + 0x16C7D9C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BookWindow*))(Il2CppBase() + 0x16C808C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BookWindow*, float))(Il2CppBase() + 0x16C8F48))(this, deltaTime);
	}

};

}
