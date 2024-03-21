#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../System/System_Collections_Generic/Queue1.h"

namespace System { class Action; }

class IronSourceEventsDispatcher : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEventsDispatcher"));
	}

	static IronSourceEventsDispatcher*& instance() {
		return *(IronSourceEventsDispatcher**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System_Collections_Generic::Queue1<System::Action*>*& ironSourceExecuteOnMainThreadQueue() {
		return *(System_Collections_Generic::Queue1<System::Action*>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

};};
