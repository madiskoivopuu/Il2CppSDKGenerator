#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatMessageView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatMessageView"));
	}

	template <typename T = uintptr_t> T& Message() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& InputHandlerButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _fromName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& _fromId() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Init(uintptr_t messageColor, uintptr_t entity) {
		return ((T (*)(ChatMessageView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1734824))(this, messageColor, entity);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChatMessageView*))(Il2CppBase() + 0x1734CF0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChatMessageView*))(Il2CppBase() + 0x1734D8C))(this);
	}
	template <typename T = void> T FadeIn(float duration, bool hideAll) {
		return ((T (*)(ChatMessageView*, float, bool))(Il2CppBase() + 0x1734DB4))(this, duration, hideAll);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(ChatMessageView*))(Il2CppBase() + 0x1734E7C))(this);
	}
	template <typename T = void> T OnMessageClicked() {
		return ((T (*)(ChatMessageView*))(Il2CppBase() + 0x1734EE0))(this);
	}

};

}
