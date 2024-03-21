#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class Il2CppString*;

class IronSourceSegmentAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegmentAndroid"));
	}

	System::Action1<Il2CppString*>*& OnSegmentRecieved() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x20);
	}

};};
