#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowGetRewardButtonNotificationd80
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowGetRewardButtonNotification>d__80"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppObject*> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = BattlePassWindow*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEA95C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEA960))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC50))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC58))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ShowGetRewardButtonNotificationd80*))(Il2CppBase() + 0xEEAC98))(this);
	}

};

