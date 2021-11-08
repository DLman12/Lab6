#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
#include"RecordBook.h"

int main(void)
{
	setlocale(LC_ALL, "Rus");

	struct Zachetka z = {
		.firstName = "Михаил",
		.middleName = "Денисович",
		.lastName = "Мартынов",
		.zachetkaid = "1БИН18101",
		.terms = {
			{
				.number = 1,
				.year = 2018,
				.subjects =
				{
					{
						.name = "Высшая математика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "18.01.19",
						.teacher = "Куприн А.В."
					},
					{
						.name = "Философия",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "23.01.19",
						.teacher = "Музыченко М.Я."
					},
					{
						.name = "АГиЛА",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "30.01.2019",
						.teacher = "Куприн А.В."
					},
					{
						.name = "ТОСИО",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "19.12.2018",
						.teacher = "Музыченко М.Я."
					},
					{
						.name = "РЯиКР",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "24.12.2018",
						.teacher = "Невзорова С.Ю."
					},
					{
						.name = "Ин.яз",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "26.12.2018",
						.teacher = "Чупак Н.М."
					},
					{
						.name = "ВВП",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "11.01.2019",
						.teacher = "Шаврин С.С."
					},					
                    {
						.name = "Информатика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "11.01.2019",
						.teacher = "Загвоздкина А.В."
					}
				}
			},
		{
				.number = 2,
				.year = 2019,
				.subjects =
				{
					{
						.name = "Англ.яз",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "11.06.2019",
						.teacher = "Орлова Г.Л."
					},
					{
						.name = "Высш.матем.",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "24.06.2019",
						.teacher = "Дубнов Д.В."
					},
					{
						.name = "Информатика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "28.06.2019",
						.teacher = "Кравченко О.М."
					},
					{
						.name = "История",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "02.07.2019",
						.teacher = "Кунц Е.В."
					},
					{
						.name = "Физика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "04.06.2019",
						.teacher = "Перепелкин Е.Е."
					},
					{
						.name = "КГ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "3.06.2019",
						.teacher = "Рывлина А.А."
					},
					{
						.name = "ТОЭ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "04.06.2019",
						.teacher = "Хатунцева Е.А."
					},
					{
						.name = "Эл.д. по сил. вид. спорта",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "05.06.2019",
						.teacher = "Королева С.А."
					},
                    {
						.name = "УП",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "Бойченко И.В."
					}

				}
			},
            {
				.number = 3,
				.year = 2020,
				.subjects =
				{
					{
						.name = "Физика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "31.01.2020",
						.teacher = "Перепелкин Е.Е."
					},
					{
						.name = "ВМ",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "16.01.2020",
						.teacher = "Юсков И.О."
					},
					{
						.name = "ТВиМС",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "21.01.2020",
						.teacher = "Маненков С.А."
					},
					{
						.name = "Дискр.мат",
						.markType = Exam,
						.mark = {.mark = Sat},
						.date = "27.01.2020",
						.teacher = "Александров Ю.Л."
					},
					{
						.name = "Физ.воспитание",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "20.12.2019",
						.teacher = "Кулин А.А."
					},
					{
						.name = "ВвМППП",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "24.12.2019",
						.teacher = "Загвоздкина А.В."
					},
					{
						.name = "ТЭЦ к.р.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "24.12.2019",
						.teacher = "Крейнделин В.Б."
					},
					{
						.name = "ИРСиЗС",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "25.12.2019",
						.teacher = "Коренский М.Ю."
					},
                    {
						.name = "ФОЭ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "30.12.2019",
						.teacher = "Сретенская Н.В."
					},
                    {
						.name = "ТЭЦ лаб.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "30.12.2019",
						.teacher = "Микиртичан А.Г."
					},
                    {
						.name = "ТФКП",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "31.12.2019",
						.teacher = "Гудкова И.А."
					}

				}
			}

		},


	};

	printf("Студент: %s %s %s\n", z.lastName, z.firstName, z.middleName);
	printf("Номер зачетной книжки : %s \n", z.zachetkaid);
	printf("===============================================================\n");
	for (int i = 0; z.terms[i].number; ++i)
	{

		printf("Семестр %hu год %hu \n", z.terms[i].number, z.terms[i].year);
		printf("%-20s\t%-6s\t%-11s\t%-20s\r\n", "Предмет", "Оценка", "Дата", "Преподователь");
		for (int j = 0; z.terms[i].subjects[j].name[0]; j++)
		{
			printf("%-20s\t", z.terms[i].subjects[j].name);
			if (z.terms[i].subjects[j].markType == Zachet)
			{
				printf("%-6s\t",
					z.terms[i].subjects[j].mark.zachet ? "Зачет" : "Не зачет");
			}
			else
			{
				printf("%-6d\t", z.terms[i].subjects[j].mark.mark);
			}
			printf("%-11s\t", z.terms[i].subjects[j].date);
			printf("%-20s\t", z.terms[i].subjects[j].teacher);
			printf("\r\n");
		}
		printf("===============================================================\n");
	}
}