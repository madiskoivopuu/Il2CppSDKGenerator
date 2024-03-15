#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAvailableEmojisd11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAvailableEmojis>d__11"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ItemEntity*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& l__initialThreadId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = AccountEntity*> R& account() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = AccountEntity*> R& 3__account() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = PlayerCosmeticsData*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppDictionary<Il2CppString*, bool>*& availableCosmetics5__2() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& 7__wrap2() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& 7__wrap3() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B35F0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B35F4))(this);
	}
	template <typename R = ItemEntity*> R System_Collections_Generic_IEnumeratorItemEntity_get_Current() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B3778))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B3780))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B37C0))(this);
	}
	 IEnumerator1ItemEntity*>* System_Collections_Generic_IEnumerableItemEntity_GetEnumerator() {
		return ((IEnumerator1ItemEntity*>* (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B37C8))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(GetAvailableEmojisd11*))(Il2CppBase() + 0x10B3888))(this);
	}

};

