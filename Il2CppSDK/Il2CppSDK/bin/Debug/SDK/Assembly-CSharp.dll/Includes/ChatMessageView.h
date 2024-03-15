#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMessageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMessageView"));
	}

	template <typename R = uintptr_t> R& Message() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& InputHandlerButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _fromName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& _fromId() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Init(uintptr_t messageColor, ChatEntity* entity) {
		return ((R (*)(ChatMessageView*, uintptr_t, ChatEntity*))(Il2CppBase() + 0x1734824))(this, messageColor, entity);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ChatMessageView*))(Il2CppBase() + 0x1734CF0))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ChatMessageView*))(Il2CppBase() + 0x1734D8C))(this);
	}
	template <typename R = void> R FadeIn(float duration, bool hideAll) {
		return ((R (*)(ChatMessageView*, float, bool))(Il2CppBase() + 0x1734DB4))(this, duration, hideAll);
	}
	template <typename R = void> R FadeOut() {
		return ((R (*)(ChatMessageView*))(Il2CppBase() + 0x1734E7C))(this);
	}
	template <typename R = void> R OnMessageClicked() {
		return ((R (*)(ChatMessageView*))(Il2CppBase() + 0x1734EE0))(this);
	}

};

