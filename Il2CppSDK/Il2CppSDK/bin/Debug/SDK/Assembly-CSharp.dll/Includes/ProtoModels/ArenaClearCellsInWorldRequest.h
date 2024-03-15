#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClearCellsInWorldRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClearCellsInWorldRequest"));
	}

	 static MessageParser1ProtoModels::ArenaClearCellsInWorldRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaClearCellsInWorldRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CallbackIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& callbackID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CellsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::EmptyCell*>*& _repeated_cells_codec() {
		return *(FieldCodec1ProtoModels::EmptyCell*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::EmptyCell*>*& cells_() {
		return *(RepeatedField1ProtoModels::EmptyCell*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaClearCellsInWorldRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaClearCellsInWorldRequest*>* (*)(void *))(Il2CppBase() + 0x1A1E094))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A1E0F8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E218))(this);
	}
	template <typename R = ProtoModels::ArenaClearCellsInWorldRequest*> R Clone() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E380))(this);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3DC))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1E3E4))(this, value);
	}
	template <typename R = int64_t> R get_CallbackID() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3EC))(this);
	}
	template <typename R = void> R set_CallbackID(int64_t value) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, int64_t))(Il2CppBase() + 0x1A1E3F4))(this, value);
	}
	 RepeatedField1ProtoModels::EmptyCell*>* get_Cells() {
		return ((RepeatedField1ProtoModels::EmptyCell*>* (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E3FC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1E404))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaClearCellsInWorldRequest* other) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, ProtoModels::ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E474))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E520))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E5A4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E608))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E700))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaClearCellsInWorldRequest* other) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, ProtoModels::ArenaClearCellsInWorldRequest*))(Il2CppBase() + 0x1A1E828))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaClearCellsInWorldRequest*, uintptr_t))(Il2CppBase() + 0x1A1E8B8))(this, input);
	}

};

}
