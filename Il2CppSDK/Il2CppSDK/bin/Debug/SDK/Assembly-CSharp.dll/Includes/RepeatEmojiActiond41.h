#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatEmojiActiond41
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RepeatEmojiAction>d__41"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = PuppetRendererController*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& emojiName() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC16C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC170))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC234))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC23C))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(RepeatEmojiActiond41*))(Il2CppBase() + 0x10BC27C))(this);
	}

};

