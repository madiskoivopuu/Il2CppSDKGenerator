#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class IronSourceImpressionData*;

class IronSourceImpressionDataAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceImpressionDataAndroid"));
	}

	System::Action1<IronSourceImpressionData*>*& OnImpressionSuccess() {
		return *(System::Action1<IronSourceImpressionData*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceImpressionData*>*& OnImpressionDataReady() {
		return *(System::Action1<IronSourceImpressionData*>**)((uintptr_t)this + 0x28);
	}

};};
