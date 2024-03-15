#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatEmojiActiond41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RepeatEmojiAction>d__41"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& duration() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = PuppetRendererController*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& emojiName() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC16C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC170))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC234))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC23C))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC27C))(this);
	}

};

