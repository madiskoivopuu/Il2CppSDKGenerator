#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"
#include "../mscorlib/System_Collections_Generic/Dictionary2.h"
#include "../mscorlib/System/Boolean.h"

class IronSourceError*;
namespace System { class Action; }
class Il2CppString*;
class Il2CppObject*;

class IronSourceOfferwallAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceOfferwallAndroid"));
	}

	System::Action1<IronSourceError*>*& OnOfferwallShowFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}

	System::Action*& OnOfferwallOpened() {
		return *(System::Action**)((uintptr_t)this + 0x28);
	}

	System::Action*& OnOfferwallClosed() {
		return *(System::Action**)((uintptr_t)this + 0x30);
	}

	System::Action1<IronSourceError*>*& OnGetOfferwallCreditsFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x38);
	}

	System::Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*& OnOfferwallAdCredited() {
		return *(System::Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>**)((uintptr_t)this + 0x40);
	}

	System::Action1<bool>*& OnOfferwallAvailable() {
		return *(System::Action1<bool>**)((uintptr_t)this + 0x48);
	}

};};
