#pragma once

#include "../mscorlib/System/ValueType.h"


class SendBugReportData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendBugReportData"));
	}

	int64_t& LastReport() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
