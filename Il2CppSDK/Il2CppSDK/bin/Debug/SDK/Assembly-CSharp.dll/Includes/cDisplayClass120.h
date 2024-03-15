#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass120
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidSavedGameClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1uintptr_t>*& callback() {
		return *(Action1uintptr_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R AddOnFailureListenerWithSignOutb__0(uintptr_t exception) {
		return ((R (*)(cDisplayClass120*, uintptr_t))(Il2CppBase() + 0x1144558))(this, exception);
	}

};

