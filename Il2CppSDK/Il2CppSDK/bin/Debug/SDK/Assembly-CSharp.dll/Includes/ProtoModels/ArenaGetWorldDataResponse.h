#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetWorldDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetWorldDataResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WasChangesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& wasChanges_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& JsonDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_jsonData_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& jsonData_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CellOwnerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_cellOwner_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& cellOwner_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CellOwnerSupportFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& cellOwnerSupport_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& StatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_stats_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> T& stats_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& MountEndTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_mountEndTimeUnix_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& mountEndTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& OwnerStatsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_ownerStats_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> T& ownerStats_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E25974))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E259D8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25AF8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25EA0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25EFC))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaGetWorldDataResponse*, int32_t))(Il2CppBase() + 0x1E25F04))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25F0C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaGetWorldDataResponse*, Il2CppString*))(Il2CppBase() + 0x1E25F14))(this, value);
	}
	template <typename T = bool> T get_WasChanges() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25F94))(this);
	}
	template <typename T = void> T set_WasChanges(bool value) {
		return ((T (*)(ArenaGetWorldDataResponse*, bool))(Il2CppBase() + 0x1E25F9C))(this, value);
	}
	template <typename T = void*> T get_JsonData() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FA8))(this);
	}
	template <typename T = void*> T get_CellOwner() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FB0))(this);
	}
	template <typename T = bool> T get_CellOwnerSupport() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FB8))(this);
	}
	template <typename T = void> T set_CellOwnerSupport(bool value) {
		return ((T (*)(ArenaGetWorldDataResponse*, bool))(Il2CppBase() + 0x1E25FC0))(this, value);
	}
	template <typename T = void*> T get_Stats() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FCC))(this);
	}
	template <typename T = void*> T get_MountEndTimeUnix() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FD4))(this);
	}
	template <typename T = void*> T get_OwnerStats() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FDC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E25FE4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E26054))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E261F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E26330))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E26394))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E265D8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E26828))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E2697C))(this, input);
	}

};

}
