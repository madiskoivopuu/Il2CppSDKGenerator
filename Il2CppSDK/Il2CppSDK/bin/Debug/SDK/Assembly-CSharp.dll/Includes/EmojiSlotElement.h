#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiSlotElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiSlotElement"));
	}

	template <typename T = uintptr_t> T& slot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& multiItems() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& slotImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& topSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& middleSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bottomSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_Container() {
		return ((T (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA14))(this);
	}
	template <typename T = bool> T get_IsContainElement() {
		return ((T (*)(EmojiSlotElement*))(Il2CppBase() + 0x136F020))(this);
	}
	template <typename T = bool> T get_IsForMultiItems() {
		return ((T (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA1C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EmojiSlotElement*))(Il2CppBase() + 0x136FA24))(this);
	}
	template <typename T = void> T SetCurrentImageState() {
		return ((T (*)(EmojiSlotElement*))(Il2CppBase() + 0x136EBC8))(this);
	}
	template <typename T = void> T Put(uintptr_t emojiButton, uintptr_t oldSlotForCurrent, bool withEvent) {
		return ((T (*)(EmojiSlotElement*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x136C634))(this, emojiButton, oldSlotForCurrent, withEvent);
	}

};

}
