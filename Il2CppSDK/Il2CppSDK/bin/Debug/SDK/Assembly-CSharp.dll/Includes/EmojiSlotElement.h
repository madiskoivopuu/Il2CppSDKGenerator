#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiSlotElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiSlotElement"));
	}

	template <typename R = uintptr_t> R& slot() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& multiItems() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& slotImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& topSprite() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& middleSprite() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& bottomSprite() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = uintptr_t> R get_Container() {
		return ((R (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA14))(this);
	}
	template <typename R = bool> R get_IsContainElement() {
		return ((R (*)(EmojiSlotElement*))(Il2CppBase() + 0x136F020))(this);
	}
	template <typename R = bool> R get_IsForMultiItems() {
		return ((R (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA1C))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA24))(this);
	}
	template <typename R = void> R SetCurrentImageState() {
		return ((R (*)(EmojiSlotElement*))(Il2CppBase() + 0x136EBC8))(this);
	}
	template <typename R = void> R Put(EmojiActionButton* emojiButton, EmojiSlotElement* oldSlotForCurrent, bool withEvent) {
		return ((R (*)(EmojiSlotElement*, EmojiActionButton*, EmojiSlotElement*, bool))(Il2CppBase() + 0x136C634))(this, emojiButton, oldSlotForCurrent, withEvent);
	}

};

