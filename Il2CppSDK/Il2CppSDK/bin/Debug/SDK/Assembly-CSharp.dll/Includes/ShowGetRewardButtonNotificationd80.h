#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowGetRewardButtonNotificationd80
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowGetRewardButtonNotification>d__80"));
	}

	template <typename R = int32_t> R& 1__state() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppObject*> R& 2__current() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = BattlePassWindow*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R System_IDisposable_Dispose() {
		return ((R (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEA95C))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEA960))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((R (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC50))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC58))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC98))(this);
	}

};

