#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CyclicResponseData/Account.h"
#include "CyclicResponseData/ServerDetail.h"


class CyclicResponseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicResponseData"));
	}

	CyclicResponseData::Account& CyclicAccount() {
		return *(CyclicResponseData::Account*)((uintptr_t)this + 0x0);
	}

	CyclicResponseData::Account& CyclicMasterAccount() {
		return *(CyclicResponseData::Account*)((uintptr_t)this + 0x20);
	}

	CyclicResponseData::ServerDetail& CyclicServerDetail() {
		return *(CyclicResponseData::ServerDetail*)((uintptr_t)this + 0x40);
	}

	int32_t& WipePrice() {
		return *(int32_t*)((uintptr_t)this + 0x50);
	}

	Il2CppString*& ErrorMessage() {
		return *(Il2CppString**)((uintptr_t)this + 0x58);
	}

};};
