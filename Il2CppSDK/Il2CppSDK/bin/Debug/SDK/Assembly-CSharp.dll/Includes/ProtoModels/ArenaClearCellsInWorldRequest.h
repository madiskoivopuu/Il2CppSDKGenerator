#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClearCellsInWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClearCellsInWorldRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CallbackIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& callbackID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CellsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_cells_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& cells_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1E094))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1E0F8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E218))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E380))(this);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3DC))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1E3E4))(this, value);
	}
	template <typename T = int64_t> T get_CallbackID() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3EC))(this);
	}
	template <typename T = void> T set_CallbackID(int64_t value) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1E3F4))(this, value);
	}
	template <typename T = void*> T get_Cells() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3FC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E404))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E474))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E520))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E5A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E608))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E700))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E828))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E8B8))(this, input);
	}

};

}
