#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"

namespace System { class Action; }

class IronSourceInitializationAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInitializationAndroid"));
	}

	System::Action*& OnSdkInitializationCompletedEvent() {
		return *(System::Action**)((uintptr_t)this + 0x20);
	}

};};
