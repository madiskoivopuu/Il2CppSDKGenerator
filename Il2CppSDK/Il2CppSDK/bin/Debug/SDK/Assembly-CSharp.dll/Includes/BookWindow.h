#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BookWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookWindow"));
	}

	template <typename R = uintptr_t> R& CloseBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CaptionImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& PagePanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& BookPanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& SagaPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& PageText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& BookInitialCapImage() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& BookInitialCapText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& BookText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& SagaImage() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& SagaText() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(BookWindow*))(Il2CppBase() + 0x16C7D00))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BookWindow*))(Il2CppBase() + 0x16C7D9C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BookWindow*))(Il2CppBase() + 0x16C808C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BookWindow*, float))(Il2CppBase() + 0x16C8F48))(this, deltaTime);
	}

};

